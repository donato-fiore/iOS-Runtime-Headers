// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UILINKCONNECTIONACTION_H
#define UILINKCONNECTIONACTION_H

@class BSAction, LNConnectionAction;



@interface UILinkConnectionAction : BSAction

@property (readonly, nonatomic) LNConnectionAction *action;


-(NSInteger)UIActionType;
-(id)initWithAction:(id)arg0 responseHandler:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif