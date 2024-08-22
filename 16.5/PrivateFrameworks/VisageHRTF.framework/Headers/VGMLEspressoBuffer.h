// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGMLESPRESSOBUFFER_H
#define VGMLESPRESSOBUFFER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VGMLEspressoBuffer : NSObject {
    *? _network;
    NSString *_layerName;
    NSUInteger _dimensions;
    ? _buffer;
    int _mode;
}




-(*NSUInteger)getDimensions;
-(*void)getData;
-(BOOL)bindIOSurface:(id)arg0 ;
-(BOOL)bindImage:(struct __CVBuffer *)arg0 ;
-(BOOL)bindManagedBuffer;
-(BOOL)bindTensor:(id)arg0 ;
-(BOOL)checkBufferAndIOSurfaceConsistency:(id)arg0 ;
-(BOOL)copyBufferIntoIOSurface:(id)arg0 ;
-(NSUInteger)getSize;
-(id)initWithNetwork:(struct ? *)arg0 withLayerName:(id)arg1 withMode:(int)arg2 ;


@end


#endif