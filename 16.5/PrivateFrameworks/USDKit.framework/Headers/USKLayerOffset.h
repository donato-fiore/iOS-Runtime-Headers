// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USKLAYEROFFSET_H
#define USKLAYEROFFSET_H


#import <Foundation/Foundation.h>


@interface USKLayerOffset : NSObject {
    SdfLayerOffset _layerOffset;
}


@property (nonatomic) CGFloat offset; // ivar: _offset
@property (nonatomic) CGFloat scale; // ivar: _scale


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithOffset:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(id)initWithSdfLayerOffset:(struct SdfLayerOffset )arg0 ;
-(struct SdfLayerOffset )sdfLayerOffset;


@end


#endif