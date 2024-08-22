// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAENTITYTYPE_H
#define VUIMEDIAENTITYTYPE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMediaEntityType : NSObject <NSCopying>



@property (nonatomic) NSUInteger mediaCategoryType; // ivar: _mediaCategoryType
@property (nonatomic) NSUInteger mediaCollectionType; // ivar: _mediaCollectionType
@property (nonatomic, getter=isRental) BOOL rental; // ivar: _rental
@property (nonatomic) NSUInteger subtype; // ivar: _subtype


+(id)episode;
+(id)homeVideo;
+(id)movie;
+(id)movieRental;
+(id)season;
+(id)show;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithMediaCollectionType:(NSUInteger)arg0 mediaCategoryType:(NSUInteger)arg1 ;
-(id)_initWithMediaItemCategoryType:(NSUInteger)arg0 isRental:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)stringDescription;


@end


#endif