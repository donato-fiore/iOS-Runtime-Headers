// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DBARTEXCOORDRESOURCE_H
#define TSCH3DBARTEXCOORDRESOURCE_H



#import "TSCH3DAbstractBarTexCoordResource.h"
#import "TSCH3DBarExtrusionGeometry.h"
#import "TSCH3DTexCoordGeneration.h"

@interface TSCH3DBarTexCoordResource : TSCH3DAbstractBarTexCoordResource {
    TSCH3DBarExtrusionGeometry *_geometry;
    TSCH3DTexCoordGeneration *_generator;
}




-(id)get;
-(id)initWithGeometry:(id)arg0 generator:(id)arg1 ;


@end


#endif