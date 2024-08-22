// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHPROACTIVEPAGESUGGESTIONSMANAGER_H
#define SBHPROACTIVEPAGESUGGESTIONSMANAGER_H

@class ATXSuggestedPagesClient;

#import <Foundation/Foundation.h>

#import "SBHIconManager.h"
#import "SBRootFolder.h"

@interface SBHProactivePageSuggestionsManager : NSObject

@property (weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (weak, nonatomic) SBRootFolder *rootFolder; // ivar: _rootFolder
@property (retain, nonatomic) ATXSuggestedPagesClient *suggestedPagesClient; // ivar: _suggestedPagesClient


-(id)_iconForATXHomeScreenApp:(id)arg0 iconModel:(id)arg1 rootFolder:(id)arg2 ;
-(id)initWithIconManager:(id)arg0 ;
-(id)initWithIconManager:(id)arg0 overridingRootFolder:(id)arg1 ;
-(void)_addLeafIcons:(id)arg0 toList:(id)arg1 iconModel:(id)arg2 rootFolder:(id)arg3 snapshot:(BOOL)arg4 ;
-(void)_addSuggestedPage:(id)arg0 atIndex:(NSUInteger)arg1 forSnapshot:(BOOL)arg2 focusMode:(id)arg3 ;
-(void)_addSuggestedPageWithPageType:(id)arg0 focusModeIdentifier:(id)arg1 ;
-(void)addSuggestedPages:(id)arg0 withFocusModeIdentifier:(id)arg1 forSnapshot:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif