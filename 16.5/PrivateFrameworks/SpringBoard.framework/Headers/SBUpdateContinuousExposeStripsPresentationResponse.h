// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUPDATECONTINUOUSEXPOSESTRIPSPRESENTATIONRESPONSE_H
#define SBUPDATECONTINUOUSEXPOSESTRIPSPRESENTATIONRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"

@interface SBUpdateContinuousExposeStripsPresentationResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSUInteger dismissalOptions; // ivar: _dismissalOptions
@property (readonly, nonatomic) NSUInteger presentationOptions; // ivar: _presentationOptions


-(NSInteger)type;
-(id)initWithPresentationOptions:(NSUInteger)arg0 dismissalOptions:(NSUInteger)arg1 ;


@end


#endif