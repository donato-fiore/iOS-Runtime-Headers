// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBLOCALTABATTRIBUTES_H
#define WBLOCALTABATTRIBUTES_H

@class NSArray, NSDate, NSDictionary, NSString, NSURL, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBLocalTabAttributes : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *ancestorTabUUIDs; // ivar: _ancestorTabUUIDs
@property (readonly, copy, nonatomic) NSDate *dateClosed; // ivar: _dateClosed
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isDisplayingStandaloneImage) BOOL displayingStandaloneImage; // ivar: _displayingStandaloneImage
@property (readonly, nonatomic) BOOL isDisposable; // ivar: _isDisposable
@property (readonly, nonatomic) BOOL isMuted; // ivar: _isMuted
@property (readonly, nonatomic) BOOL isPinned; // ivar: _isPinned
@property (readonly, nonatomic) BOOL isSafeToLoadWebPage; // ivar: _isSafeToLoadWebPage
@property (readonly, copy, nonatomic) NSDate *lastVisitTime; // ivar: _lastVisitTime
@property (readonly, nonatomic, getter=wasOpenedFromLink) BOOL openedFromLink; // ivar: _openedFromLink
@property (readonly, copy, nonatomic) NSString *pinnedPageTitle; // ivar: _pinnedPageTitle
@property (readonly, copy, nonatomic) NSURL *pinnedPageURL; // ivar: _pinnedPageURL
@property (readonly, copy, nonatomic) NSDictionary *queuedNavigation; // ivar: _queuedNavigation
@property (readonly, nonatomic) CGFloat readerViewTopScrollOffset; // ivar: _readerViewTopScrollOffset
@property (readonly, nonatomic) int readingListBookmarkID; // ivar: _readingListBookmarkID
@property (readonly, copy, nonatomic) NSData *sessionStateData; // ivar: _sessionStateData
@property (readonly, nonatomic, getter=isShowingReader) BOOL showingReader; // ivar: _showingReader
@property (readonly, nonatomic) NSUInteger tabIndex; // ivar: _tabIndex
@property (readonly, nonatomic) NSString *windowUUID; // ivar: _windowUUID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithLastVisitTime:(id)arg0 sessionStateData:(id)arg1 ancestorTabUUIDs:(id)arg2 displayingStandaloneImage:(BOOL)arg3 readerViewTopScrollOffset:(CGFloat)arg4 readingListBookmarkID:(int)arg5 openedFromLink:(BOOL)arg6 showingReader:(BOOL)arg7 queuedNavigation:(id)arg8 ;
-(id)initWithVersion:(NSInteger)arg0 safeToLoadWebPage:(BOOL)arg1 lastVisitTime:(id)arg2 sessionStateData:(id)arg3 ancestorTabUUIDs:(id)arg4 dateClosed:(id)arg5 tabIndex:(NSUInteger)arg6 windowUUID:(id)arg7 disposable:(BOOL)arg8 pinned:(BOOL)arg9 pinnedPageURL:(id)arg10 pinnedPageTitle:(id)arg11 muted:(BOOL)arg12 queuedNavigation:(id)arg13 displayingStandaloneImage:(BOOL)arg14 readerViewTopScrollOffset:(CGFloat)arg15 readingListBookmarkID:(int)arg16 openedFromLink:(BOOL)arg17 showingReader:(BOOL)arg18 ;
-(id)localAttributesWithLastVisitTime:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif