// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHFEATUREINTRODUCTIONMANAGER_H
#define SBHFEATUREINTRODUCTIONMANAGER_H

@class NSMutableDictionary, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHFeatureIntroductionManager : NSObject <BSDescriptionProviding>

 {
    NSMutableDictionary *_allFeatureIntroductionItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)featureLocationFromMask:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)featureIntroductionItemAtLocation:(NSUInteger)arg0 ;
-(id)featureIntroductionItemAtLocation:(NSUInteger)arg0 withIdentifier:(id)arg1 ;
-(id)featureIntroductionItemsSetAtLocation:(NSUInteger)arg0 ;
-(id)featureLocationKeyFromLocation:(NSUInteger)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addFeatureIntroductionItem:(id)arg0 atLocations:(NSUInteger)arg1 ;
-(void)removeAllFeatureIntroductionsAtLocations:(NSUInteger)arg0 ;
-(void)removeFeatureIntroductionAtAllLocationsWithItem:(id)arg0 ;
-(void)removeFeatureIntroductionItem:(id)arg0 atLocations:(NSUInteger)arg1 ;


@end


#endif