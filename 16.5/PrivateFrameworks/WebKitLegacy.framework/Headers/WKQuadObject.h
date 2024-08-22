// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKQUADOBJECT_H
#define WKQUADOBJECT_H


#import <Foundation/Foundation.h>


@interface WKQuadObject : NSObject {
    _WKQuad _quad;
}




-(id)initWithQuad:(struct _WKQuad )arg0 ;
-(struct CGRect )boundingBox;
-(struct _WKQuad )quad;


@end


#endif