// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUMEDIAPLAYERITEM_H
#define SUMEDIAPLAYERITEM_H

@class NSURL, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUMediaPlayerItem : NSObject <NSCopying>



@property (retain, nonatomic) NSURL *URL; // ivar: _url
@property (retain, nonatomic) NSURL *backgroundImageURL; // ivar: _backgroundImageURL
@property (copy, nonatomic) NSString *bookmarkIdentifier; // ivar: _bookmarkIdentifier
@property (nonatomic) CGFloat bookmarkedStartTime;
@property (copy, nonatomic) NSArray *downloadPingURLs; // ivar: _downloadPingURLs
@property (nonatomic) NSInteger initialOrientation; // ivar: _initialOrientation
@property (nonatomic) NSUInteger itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) NSInteger itemType; // ivar: _itemType
@property (nonatomic) CGFloat playableDuration; // ivar: _playableDuration
@property (copy, nonatomic) NSArray *playbackPingURLs; // ivar: _playbackPingURLs
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)_newPingURLsWithArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(void)dealloc;


@end


#endif