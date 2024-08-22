// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCSUPPLEMENTARYVIEWPROTOTYPERECIPE_H
#define NCSUPPLEMENTARYVIEWPROTOTYPERECIPE_H

@class NSString, NSMutableDictionary;
@protocol NCSupplementaryViewPrototypeRecipeViewControllerDelegate, NCSupplementaryViewPrototypeRecipeDelegate;

#import <Foundation/Foundation.h>


@interface NCSupplementaryViewPrototypeRecipe : NSObject <NCSupplementaryViewPrototypeRecipeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCSupplementaryViewPrototypeRecipeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *lastModifiedDatesByGroupingIdentifiers; // ivar: _lastModifiedDatesByGroupingIdentifiers
@property (readonly) Class superclass;


+(id)_sharedInstance;
+(void)registerRecipeWithDelegate:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSInteger)_compareByAgeForViewController:(id)arg0 otherViewController:(id)arg1 ;
-(NSUInteger)prototypeRecipeViewController:(id)arg0 requestsCountForGroupWithIdentifier:(id)arg1 ;
-(id)_mostRecentDateForGroupingIdentifier:(id)arg0 ;
-(id)_supplementaryViewsTestRecipeWithDelegate:(id)arg0 ;
-(id)init;
-(void)_presentSupplementaryViewController;
-(void)_registerRecipeWithDelegate:(id)arg0 ;
-(void)_setSortComparatorsForContainer:(id)arg0 ;
-(void)_updateGroupLastModifiedDateForViewController:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)recipeMenuViewController:(id)arg0 requestsInsertContentViewController:(id)arg1 ;
-(void)requestsInsertForPrototypeRecipeViewController:(id)arg0 ;
-(void)requestsRemovalForPrototypeRecipeViewController:(id)arg0 ;
-(void)requestsUpdateForPrototypeRecipeViewController:(id)arg0 ;
-(void)requestsUpdatePositionIfNeededForPrototypeRecipeViewController:(id)arg0 ;


@end


#endif