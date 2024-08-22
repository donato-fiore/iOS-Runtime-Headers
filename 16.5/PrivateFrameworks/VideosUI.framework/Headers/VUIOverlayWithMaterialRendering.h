// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIOVERLAYWITHMATERIALRENDERING_H
#define VUIOVERLAYWITHMATERIALRENDERING_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUIOverlayWithMaterialRendering : NSObject

@property (nonatomic) CGRect croppedRect; // ivar: _croppedRect
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGRect rect; // ivar: _rect


-(id)init;
-(id)initWithIdentifier:(id)arg0 rect:(struct CGRect )arg1 croppedRect:(struct CGRect )arg2 ;


@end


#endif