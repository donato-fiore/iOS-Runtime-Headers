// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHTESTFEATUREINTRODUCTIONITEM_H
#define SBHTESTFEATUREINTRODUCTIONITEM_H



#import "SBHFeatureIntroductionItem.h"

@interface SBHTestFeatureIntroductionItem : SBHFeatureIntroductionItem

@property (nonatomic) BOOL didDisplayFeatureIntroduction; // ivar: _didDisplayFeatureIntroduction
@property (nonatomic) BOOL didSetupFeatureIntroduction; // ivar: _didSetupFeatureIntroduction


-(BOOL)shouldDisplayFeatureIntroductionAtLocations:(NSUInteger)arg0 ;
-(BOOL)shouldSetupFeatureIntroductionAtLocations:(NSUInteger)arg0 ;
-(id)featureIntroductionIdentifier;
// -(void)displayFeatureIntroductionAtLocations:(NSUInteger)arg0 presentCompletion:(id)arg1 dismissCompletion:(unk)arg2  ;
-(void)setupFeatureIntroductionAtLocations:(NSUInteger)arg0 ;


@end


#endif