// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DLABELSMESHRENDERERLABELINFO_H
#define TSCH3DLABELSMESHRENDERERLABELINFO_H


#import <Foundation/Foundation.h>

#import "TSCH3DExternalLabelAttribute.h"
#import "TSCH3DLabelsRenderer.h"

@interface TSCH3DLabelsMeshRendererLabelInfo : NSObject

@property (readonly, nonatomic) tvec2<float> alignmentOffset; // ivar: _alignmentOffset
@property (readonly, nonatomic) TSCH3DExternalLabelAttribute *externalAttribute; // ivar: _externalAttribute
@property (readonly, nonatomic) tvec2<float> offset; // ivar: _offset
@property (readonly, nonatomic) tvec3<float> position; // ivar: _position
@property (readonly, weak, nonatomic) TSCH3DLabelsRenderer *renderer; // ivar: _renderer
@property (readonly, nonatomic) float rotation; // ivar: _rotation
@property (readonly, nonatomic) tvec3<float> scale; // ivar: _scale
@property (readonly, nonatomic) tvec3<float> translation; // ivar: _translation


-(id)initWithRenderer:(id)arg0 position:(struct tvec3<float> )arg1 translation:(struct tvec3<float> )arg2 scale:(struct tvec3<float> )arg3 rotation:(float)arg4 offset:(struct tvec2<float> )arg5 alignmentOffset:(struct tvec2<float> )arg6 externalAttribute:(id)arg7 ;


@end


#endif