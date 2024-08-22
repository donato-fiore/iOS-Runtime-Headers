// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DCACHEDLABELBOUNDS_H
#define TSCH3DCACHEDLABELBOUNDS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCH3DCachedLabelBounds : NSObject

@property (readonly, nonatomic) box<glm::detail::tvec2<float>> labelBox; // ivar: _labelBox
@property (readonly, nonatomic) tvec2<float> offset2D; // ivar: _offset2D
@property (readonly, nonatomic) tvec3<float> position; // ivar: _position
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string


+(id)boundsWithPosition:(struct tvec3<float> )arg0 labelBox:(struct box<glm::detail::tvec2<float>> )arg1 offset2D:(struct tvec2<float> )arg2 string:(id)arg3 ;
-(id)initWithPosition:(struct tvec3<float> )arg0 labelBox:(struct box<glm::detail::tvec2<float>> )arg1 offset2D:(struct tvec2<float> )arg2 string:(id)arg3 ;
-(struct box<glm::detail::tvec3<float>> )normalizedBoundsWithOffset:(struct tvec3<float> )arg0 transforms:(id)arg1 viewport:(struct box<glm::detail::tvec2<int>> )arg2 ;


@end


#endif