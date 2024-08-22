// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKBROWSEITEM_H
#define WLKBROWSEITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WLKBasicContentMetadata.h"
#import "WLKComingSoonInfo.h"
#import "WLKBrowseItem.h"

@interface WLKBrowseItem : NSObject

@property (readonly, nonatomic) WLKBasicContentMetadata *content; // ivar: _content
@property (retain, nonatomic) WLKComingSoonInfo *contentComingSoonInfo; // ivar: _contentComingSoonInfo
@property (readonly, nonatomic) WLKBrowseItem *currentEpisode; // ivar: _currentEpisode
@property (readonly, nonatomic) NSArray *playables; // ivar: _playables
@property (readonly, nonatomic, getter=isWatchlistable) BOOL watchlistable; // ivar: _watchlistable
@property (readonly, nonatomic, getter=isWatchlisted) BOOL watchlisted; // ivar: _watchlisted


+(id)browseItemsWithDictionaries:(id)arg0 context:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)preferredComingSoonInfo;


@end


#endif