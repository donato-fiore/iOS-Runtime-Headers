// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHARESHEETWORKFLOW_H
#define WFSHARESHEETWORKFLOW_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFShareSheetWorkflow : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned short glyphCharacter; // ivar: _glyphCharacter
@property (readonly, nonatomic) *CGImage iconImage; // ivar: _iconImage
@property (readonly, nonatomic) CGFloat iconScale; // ivar: _iconScale
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 glyphCharacter:(unsigned short)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif