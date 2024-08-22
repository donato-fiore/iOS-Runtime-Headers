// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSASSETS_H
#define TPSASSETS_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"
#import "TPSGradient.h"

@interface TPSAssets : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *alt; // ivar: _alt
@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (copy, nonatomic) NSString *fallbackId; // ivar: _fallbackId
@property (copy, nonatomic) TPSGradient *gradient; // ivar: _gradient
@property (copy, nonatomic) NSString *imageId; // ivar: _imageId
@property (copy, nonatomic) NSString *posterId; // ivar: _posterId
@property (copy, nonatomic) NSString *symbolColor; // ivar: _symbolColor
@property (copy, nonatomic) NSString *symbolId; // ivar: _symbolId
@property (copy, nonatomic) NSString *symbolSize; // ivar: _symbolSize
@property (copy, nonatomic) NSString *thumbnailId; // ivar: _thumbnailId
@property (copy, nonatomic) NSString *videoId; // ivar: _videoId


+(BOOL)supportsSecureCoding;
+(id)assetsFromDictionary:(id)arg0 ;
+(id)na_identity;
-(BOOL)hasImage;
-(BOOL)hasVideo;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)identifierForKey:(id)arg0 dictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 ;
-(id)initWithSymbolId:(id)arg0 symbolColor:(id)arg1 symbolSize:(id)arg2 alt:(id)arg3 gradientColorStrings:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif