// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIONAVIGATIONBARTITLERENAMERVIEWMETRICSUPDATEACTION_H
#define _UIONAVIGATIONBARTITLERENAMERVIEWMETRICSUPDATEACTION_H

@class UIOAction;



@interface _UIONavigationBarTitleRenamerViewMetricsUpdateAction : UIOAction



-(BOOL)isPermitted;
-(NSInteger)textAlignment;
-(id)initWithFrame:(struct CGRect )arg0 textAlignment:(NSInteger)arg1 session:(id)arg2 responseHandler:(id)arg3 ;
-(struct CGRect )frame;
-(void)performActionFromConnection:(id)arg0 ;


@end


#endif