// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIARTWORKLIST_H
#define SKUIARTWORKLIST_H

@class NSArray, NSMutableDictionary, NSString;
@protocol SKUIArtworkProviding;

#import <Foundation/Foundation.h>

#import "SKUIArtwork.h"

@interface SKUIArtworkList : NSObject <SKUIArtworkProviding>



@property (readonly, nonatomic, getter=_lookupArray) NSArray *_lookupArray;
@property (copy, nonatomic) NSArray *artworks; // ivar: _artworks
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIArtwork *largestArtwork;
@property (readonly, nonatomic) SKUIArtwork *smallestArtwork;
@property (readonly) Class superclass;


+(BOOL)canHandleArtworkFormat:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)artworkForSize:(NSInteger)arg0 artworkDictionaries:(id)arg1 ;
-(BOOL)hasArtwork;
-(BOOL)isEqual:(id)arg0 ;
-(id)artworkForSize:(NSInteger)arg0 ;
-(id)artworkURLForSize:(NSInteger)arg0 ;
-(id)artworkWithWidth:(NSInteger)arg0 ;
-(id)bestArtworkForScaledSize:(struct CGSize )arg0 ;
-(id)bestArtworkForSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArtworkListArray:(id)arg0 ;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLookupArray:(id)arg0 ;
-(id)preferredExactArtworkForSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif