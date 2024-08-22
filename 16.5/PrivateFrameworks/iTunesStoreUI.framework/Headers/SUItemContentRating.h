// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUITEMCONTENTRATING_H
#define SUITEMCONTENTRATING_H

@class NSDictionary, NSString, SSItemArtworkImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUItemContentRating : NSObject <NSCopying>

 {
    NSDictionary *_dictionary;
}


@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (nonatomic) NSInteger rank; // ivar: _rank
@property (copy, nonatomic) NSString *ratingDescription; // ivar: _ratingDescription
@property (copy, nonatomic) NSString *ratingLabel; // ivar: _ratingLabel
@property (nonatomic) NSInteger ratingSystem; // ivar: _ratingSystem
@property (copy, nonatomic) SSItemArtworkImage *ratingSystemLogo; // ivar: _ratingSystemLogo
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (nonatomic) BOOL shouldHideWhenRestricted; // ivar: _shouldHideWhenRestricted


+(NSInteger)ratingSystemFromString:(id)arg0 ;
-(BOOL)_isRatingSystemForApps:(NSInteger)arg0 ;
-(BOOL)_isRatingSystemForMovies:(NSInteger)arg0 ;
-(BOOL)_isRatingSystemForMusic:(NSInteger)arg0 ;
-(BOOL)_isRatingSystemForTV:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)dealloc;


@end


#endif