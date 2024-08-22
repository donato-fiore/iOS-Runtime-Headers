// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPOTLIGHTDELEGATEMANAGER_H
#define SBSPOTLIGHTDELEGATEMANAGER_H

@class NSString, NSMutableDictionary;
@protocol SPUIRemoteSearchViewDelegate;

#import <Foundation/Foundation.h>


@interface SBSpotlightDelegateManager : NSObject <SPUIRemoteSearchViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *delegatesForLevel; // ivar: _delegatesForLevel
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)activeDelegate;
-(void)_modifyDelegatesWithBlock:(id)arg0 ;
-(void)addSpotlightDelegate:(id)arg0 forLevel:(NSUInteger)arg1 ;
-(void)dismissSearchView;
-(void)removeSpotlightDelegate:(id)arg0 forLevel:(NSUInteger)arg1 ;
-(void)searchViewContentAvailabilityDidChange;
-(void)searchViewKeyboardPresentationStateDidChange;


@end


#endif