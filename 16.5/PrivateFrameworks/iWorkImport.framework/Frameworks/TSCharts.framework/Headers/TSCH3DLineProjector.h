// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DLINEPROJECTOR_H
#define TSCH3DLINEPROJECTOR_H



#import "TSCH3DProjector.h"

@interface TSCH3DLineProjector : TSCH3DProjector

@property (nonatomic) line<glm::detail::tvec3<float>> line; // ivar: _line


-(BOOL)projectPoint:(*void)arg0 returningPoint:(*void)arg1 ;


@end


#endif