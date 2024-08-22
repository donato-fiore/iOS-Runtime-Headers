// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DBASEIMAGETEXTURETILING_H
#define TSCH3DBASEIMAGETEXTURETILING_H



#import "TSCH3DTextureTiling.h"
#import "TSCH3DVector.h"

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling {
    TSCH3DVector *_scale;
}


@property (nonatomic) float rotation; // ivar: _rotation
@property (nonatomic) tvec2<float> scale;


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)didInitFromSOS;
-(void)restoreDefault;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif