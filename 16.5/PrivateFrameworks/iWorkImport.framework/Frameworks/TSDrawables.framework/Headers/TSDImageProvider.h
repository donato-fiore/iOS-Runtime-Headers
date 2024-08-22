// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDIMAGEPROVIDER_H
#define TSDIMAGEPROVIDER_H

@class TSPData, TSUWeakReference, TSPObjectContext;

#import <Foundation/Foundation.h>


@interface TSDImageProvider : NSObject {
    TSPData *mImageData;
    TSUWeakReference *mObjectContextReference;
    uint8_t mRetainCount;
    uint8_t mInterest;
}


@property (readonly, nonatomic) CGSize dpiAdjustedNaturalSize;
@property (readonly, nonatomic) NSUInteger i_flushableMemoryEstimate;
@property (readonly, nonatomic) BOOL i_hasFlushableContent;
@property (nonatomic) int i_loadState; // ivar: mLoadState
@property (readonly, retain, nonatomic) TSPData *imageData;
@property (readonly, nonatomic) NSUInteger imageGamut;
@property (readonly, nonatomic) BOOL isError;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, weak, nonatomic) TSPObjectContext *objectContext;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImageData:(id)arg0 ;
-(id)retain;
-(int)interest;
-(void)addInterest;
-(void)dealloc;
-(void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)flush;
-(void)i_commonInit;
-(void)i_flushIfNoOneUsing;
-(void)release;
-(void)removeInterest;


@end


#endif