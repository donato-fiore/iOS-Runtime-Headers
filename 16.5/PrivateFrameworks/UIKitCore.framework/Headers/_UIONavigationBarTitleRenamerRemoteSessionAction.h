// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIONAVIGATIONBARTITLERENAMERREMOTESESSIONACTION_H
#define _UIONAVIGATIONBARTITLERENAMERREMOTESESSIONACTION_H

@class UIOResponse;



@interface _UIONavigationBarTitleRenamerRemoteSessionAction : UIOResponse



+(id)didCancelSession:(id)arg0 responseHandler:(id)arg1 ;
+(id)didEndEditingActionWithSession:(id)arg0 text:(id)arg1 responseHandler:(id)arg2 ;
+(id)shouldEndEditingActionWithSession:(id)arg0 text:(id)arg1 responseHandler:(id)arg2 ;
+(id)willBeginRenamingActionWithSession:(id)arg0 text:(id)arg1 selectedRange:(struct _NSRange )arg2 responseHandler:(id)arg3 ;
-(id)text;
-(int)_action;
-(struct _NSRange )selectedRange;
-(void)handleResponseToOverlayService:(id)arg0 ;


@end


#endif