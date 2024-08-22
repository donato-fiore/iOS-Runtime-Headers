// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHFEATUREINTRODUCTIONITEM_H
#define SBHFEATUREINTRODUCTIONITEM_H

@class NSString;
@protocol SBHFeatureIntroductionProviding;

#import <Foundation/Foundation.h>


@interface SBHFeatureIntroductionItem : NSObject <SBHFeatureIntroductionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIntroductionIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldDisplayFeatureIntroductionAtLocations:(NSUInteger)arg0 ;
-(BOOL)shouldSetupFeatureIntroductionAtLocations:(NSUInteger)arg0 ;
// -(void)displayFeatureIntroductionAtLocations:(NSUInteger)arg0 presentCompletion:(id)arg1 dismissCompletion:(unk)arg2  ;
-(void)setupFeatureIntroductionAtLocations:(NSUInteger)arg0 ;


@end


#endif