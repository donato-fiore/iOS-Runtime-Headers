// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHMULTIPLEXINGMANAGER_H
#define SBHMULTIPLEXINGMANAGER_H

@class NSMutableOrderedSet, NSMutableDictionary;
@protocol SBHMultiplexingManagerDelegate;

#import <Foundation/Foundation.h>


@interface SBHMultiplexingManager : NSObject

@property (nonatomic) NSUInteger cachedRecentViewControllerCountLimit; // ivar: _cachedRecentViewControllerCountLimit
@property (retain, nonatomic) NSMutableOrderedSet *cachedRecentViewControllerIdentifiers; // ivar: _cachedRecentViewControllerIdentifiers
@property (retain, nonatomic) NSMutableDictionary *cachedRecentViewControllersForIdentifier; // ivar: _cachedRecentViewControllersForIdentifier
@property (weak, nonatomic) NSObject<SBHMultiplexingManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *multiplexingViewControllersForIdentifier; // ivar: _multiplexingViewControllersForIdentifier
@property (retain, nonatomic) NSMutableDictionary *viewControllersForIdentifier; // ivar: _viewControllersForIdentifier


-(BOOL)_cacheLastDiscardedViewController:(id)arg0 forIdentifier:(id)arg1 ;
-(BOOL)hasViewControllerForIdentifier:(id)arg0 ;
-(id)_activeMultiplexingViewControllerForIdentifier:(id)arg0 ;
-(id)activeMultiplexingViewControllerForIdentifier:(id)arg0 ;
-(id)activeMultiplexingViewControllerForViewController:(id)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)newMultiplexingViewControllerForIdentifier:(id)arg0 atLevel:(CGFloat)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)viewControllerForIdentifier:(id)arg0 ;
-(void)_modifyViewControllersForIdentifier:(id)arg0 reusingCacheViewControllersIfNecessary:(BOOL)arg1 withBlock:(id)arg2 ;
-(void)_trimCachedRecentViewControllers;
-(void)discardCachedRecentViewControllers;
-(void)discardCachedRecentViewControllersForIdentifier:(id)arg0 ;
-(void)discardMultiplexingViewController:(id)arg0 ;
-(void)enumerateAllViewControllersUsingBlock:(id)arg0 ;
-(void)setViewController:(id)arg0 forIdentifier:(id)arg1 ;
-(void)validateActiveMultiplexingViewControllerForIdentifier:(id)arg0 ;


@end


#endif