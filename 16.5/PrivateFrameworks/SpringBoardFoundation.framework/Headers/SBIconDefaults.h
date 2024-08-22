// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONDEFAULTS_H
#define SBICONDEFAULTS_H

@class NSDictionary;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBIconDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL didShowIconReorderAlert;
@property (readonly, nonatomic) NSDictionary *legacyIconState;
@property (readonly, nonatomic) NSDictionary *legacyIconState2;
@property (readonly, nonatomic) NSInteger maxIconListCount;
@property (readonly, nonatomic) BOOL shouldDisableLiveIcons;
@property (nonatomic) BOOL suppressAppShortcutTruncation;
@property (readonly, nonatomic) BOOL suppressSetCurrentPage;


-(void)_bindAndRegisterDefaults;
-(void)clearLegacyDefaults;


@end


#endif