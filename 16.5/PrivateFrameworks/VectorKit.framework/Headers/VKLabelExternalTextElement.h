// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKLABELEXTERNALTEXTELEMENT_H
#define VKLABELEXTERNALTEXTELEMENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VKLabelExternalTextElement : NSObject <NSSecureCoding>

 {
    LabelExternalTextElement _element;
}




+(BOOL)supportsSecureCoding;
-(*void)element;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextElement:(*void)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif