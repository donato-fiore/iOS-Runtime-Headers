// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDIMAGE_H
#define CNVCARDIMAGE_H

@class NSDictionary, NSData;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CNVCardImage : NSObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSDictionary *cropRects; // ivar: _cropRects
@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(struct CGSize )sizeOfImageData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 cropRects:(id)arg1 ;
-(id)initWithData:(id)arg0 cropRects:(id)arg1 size:(struct CGSize )arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)describePropertiesWithBuilder:(id)arg0 ;


@end


#endif