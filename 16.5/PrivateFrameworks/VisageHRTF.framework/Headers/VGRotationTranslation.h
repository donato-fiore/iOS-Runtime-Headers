// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGROTATIONTRANSLATION_H
#define VGROTATIONTRANSLATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VGRotationTranslation : NSObject <NSSecureCoding>

 {
    ? _translation;
}


@property (nonatomic) ? rotation; // ivar: _rotation
@property ? translation;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif