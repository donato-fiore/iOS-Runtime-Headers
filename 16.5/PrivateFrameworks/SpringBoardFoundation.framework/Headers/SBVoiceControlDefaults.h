// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBVOICECONTROLDEFAULTS_H
#define SBVOICECONTROLDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBVoiceControlDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL disableHandlerActions;
@property (readonly, nonatomic) BOOL disableVoiceControlForBluetoothRequests;
@property (readonly, nonatomic, getter=isVoiceControlLoggingEnabled) BOOL voiceControlLoggingEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif