// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWINDOWSCENEACTIVATIONACTION_H
#define UIWINDOWSCENEACTIVATIONACTION_H

@class NSString;
@protocol _UIWindowSceneActivator;


#import "UIAction.h"

@interface UIWindowSceneActivationAction : UIAction

@property (copy, nonatomic, setter=_setAlternateAction:) UIAction *_alternateAction; // ivar: __alternateAction
@property (copy, nonatomic, setter=_setConfigurationProvider:) id *_configurationProvider; // ivar: __configurationProvider
@property (weak, nonatomic) NSObject<_UIWindowSceneActivator> *_preferredActivator; // ivar: __preferredActivator
@property (copy, nonatomic) NSString *title;


+(id)_defaultImage;
+(id)_defaultTitle;
+(id)actionWithHandler:(id)arg0 ;
+(id)actionWithIdentifier:(id)arg0 alternateAction:(id)arg1 configurationProvider:(id)arg2 ;
+(id)actionWithTitle:(id)arg0 image:(id)arg1 identifier:(id)arg2 handler:(id)arg3 ;
-(BOOL)keepsMenuPresented;
-(id)_immutableCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 identifier:(id)arg2 discoverabilityTitle:(id)arg3 attributes:(NSUInteger)arg4 alternateAction:(id)arg5 configurationProvider:(id)arg6 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 identifier:(id)arg2 discoverabilityTitle:(id)arg3 attributes:(NSUInteger)arg4 state:(NSInteger)arg5 handler:(id)arg6 ;
-(void)_requestSceneActivation;
-(void)_willBePreparedForInitialDisplay:(id)arg0 ;


@end


#endif