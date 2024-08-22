// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISINTENTFORWARDINGACTION_H
#define UISINTENTFORWARDINGACTION_H

@class BSAction, INIntent, INIntentForwardingAction;



@interface UISIntentForwardingAction : BSAction {
    INIntent *_cachedIntent;
    INIntentForwardingAction *_cachedIntentForwardingAction;
}


@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) INIntentForwardingAction *intentForwardingAction;


-(NSInteger)UIActionType;
-(id)initWithIntent:(id)arg0 reply:(id)arg1 ;
-(id)initWithIntentForwardingAction:(id)arg0 responseHandler:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif