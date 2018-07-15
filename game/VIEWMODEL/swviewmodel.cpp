#include "swviewmodel.h"
#include "sinks/swviewmodelsink.h"
#include "commands/layoutcommand.h"

SWViewModel::SWViewModel(){
    sp_SWViewModelSink_ = std::make_shared<SWViewModelSink>(this);
    sp_layoutCommand_ = std::make_shared<layoutCommand>(this);
}

void SWViewModel::setSWModel(std::shared_ptr<SWModel> sp_SWModel){
    sp_SWModel_ = sp_SWModel;
    sp_SWModel_->AddPropertyNotification(std::static_pointer_cast<IPropertyNotification>(sp_SWViewModelSink_));
}

std::shared_ptr<SWMatrix> SWViewModel::getSWMatrix(){
    return sp_SWModel_->getSWMatrix();
}

std::shared_ptr<ICommandBase> SWViewModel::getLayoutCommand(){
    return std::static_pointer_cast<ICommandBase>(sp_layoutCommand_);
}

void SWViewModel::Exec_layout_command(int level){
    sp_SWModel_->newLayout(level);
}
