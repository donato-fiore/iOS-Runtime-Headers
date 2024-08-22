// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DUIPREVIEWANDIMAGECOMPONENT_H
#define _DUIPREVIEWANDIMAGECOMPONENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_DUIImageComponent.h"
#import "_DUIPreview.h"

@interface _DUIPreviewAndImageComponent : NSObject <NSSecureCoding>



@property (retain, nonatomic) _DUIImageComponent *imageComponent; // ivar: _imageComponent
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) _DUIPreview *preview; // ivar: _preview


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif