// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBHISTORYITEM_H
#define WEBHISTORYITEM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WebHistoryItemPrivate.h"

@interface WebHistoryItem : NSObject <NSCopying>

 {
    WebHistoryItemPrivate *_private;
}


@property (readonly, copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *alternateTitle;
@property (readonly, nonatomic) CGFloat lastVisitedTimeInterval;
@property (readonly, copy, nonatomic) NSString *originalURLString;
@property (readonly, copy, nonatomic) NSString *title;


+(id)entryWithURL:(id)arg0 ;
+(void)initialize;
-(BOOL)_hasCachedPageExpired;
-(BOOL)_isInBackForwardCache;
-(BOOL)_scaleIsInitial;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTargetItem;
-(BOOL)lastVisitWasFailure;
-(NSUInteger)hash;
-(float)_scale;
-(id)RSSFeedReferrer;
-(id)URL;
-(id)_redirectURLs;
-(id)_viewportArguments;
-(id)children;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationIncludingChildren:(BOOL)arg0 ;
-(id)init;
-(id)initFromDictionaryRepresentation:(id)arg0 ;
-(id)initWithURL:(id)arg0 title:(id)arg1 ;
-(id)initWithURLString:(id)arg0 title:(id)arg1 displayTitle:(id)arg2 lastVisitedTimeInterval:(CGFloat)arg3 ;
-(id)initWithURLString:(id)arg0 title:(id)arg1 lastVisitedTimeInterval:(CGFloat)arg2 ;
-(id)initWithWebCoreHistoryItem:(*void)arg0 ;
-(id)target;
-(struct CGPoint )_scrollPoint;
-(struct CGPoint )scrollPoint;
-(void)_setScale:(float)arg0 isInitial:(BOOL)arg1 ;
-(void)_setScrollPoint:(struct CGPoint )arg0 ;
-(void)_setViewportArguments:(id)arg0 ;
-(void)_visitedWithTitle:(id)arg0 ;
-(void)dealloc;
-(void)setRSSFeedReferrer:(id)arg0 ;
-(void)setViewState:(id)arg0 ;


@end


#endif