// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBHISTORY_H
#define WEBHISTORY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WebHistoryPrivate.h"

@interface WebHistory : NSObject {
    WebHistoryPrivate *_historyPrivate;
}


@property (nonatomic) int historyAgeInDaysLimit;
@property (nonatomic) int historyItemLimit;
@property (readonly, copy, nonatomic) NSArray *orderedLastVisitedDays;


+(id)optionalSharedHistory;
+(void)_removeAllVisitedLinks;
+(void)_setVisitedLinkTrackingEnabled:(BOOL)arg0 ;
+(void)setOptionalSharedHistory:(id)arg0 ;
-(BOOL)containsURL:(id)arg0 ;
-(BOOL)loadFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveToURL:(id)arg0 error:(*id)arg1 ;
-(id)_data;
-(id)_itemForURLString:(id)arg0 ;
-(id)allItems;
-(id)init;
-(id)itemForURL:(id)arg0 ;
-(id)orderedItemsLastVisitedOnDay:(id)arg0 ;
-(void)_addVisitedLinksToVisitedLinkStore:(*void)arg0 ;
-(void)_sendNotification:(id)arg0 entries:(id)arg1 ;
-(void)_visitedURL:(id)arg0 withTitle:(id)arg1 method:(id)arg2 wasFailure:(BOOL)arg3 ;
-(void)addItems:(id)arg0 ;
-(void)dealloc;
-(void)removeAllItems;
-(void)removeItems:(id)arg0 ;
-(void)timeZoneChanged:(id)arg0 ;


@end


#endif