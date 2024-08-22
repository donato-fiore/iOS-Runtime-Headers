// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DRANGE_H
#define TSCH3DRANGE_H


#import <Foundation/Foundation.h>


@interface TSCH3DRange : NSObject

@property (readonly, nonatomic) BOOL above; // ivar: _above
@property (readonly, nonatomic) float offset;
@property (readonly, nonatomic) tvec2<float> range; // ivar: _range
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) float signedScale;


+(id)rangeWithIntercept:(float)arg0 begin:(float)arg1 end:(float)arg2 ;
-(id)initWithIntercept:(float)arg0 begin:(float)arg1 end:(float)arg2 ;


@end


#endif