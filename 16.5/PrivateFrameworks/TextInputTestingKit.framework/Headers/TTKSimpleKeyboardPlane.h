// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKSIMPLEKEYBOARDPLANE_H
#define TTKSIMPLEKEYBOARDPLANE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TTKSimpleKeyboardPlane : NSObject

@property (readonly, copy, nonatomic) NSArray *keys; // ivar: _keys
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(float)keyplaneHeightForKeys:(id)arg0 ;
+(float)keyplaneWidthForKeys:(id)arg0 ;
-(float)keyboardWidth;
-(id)initWithJsonDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 keys:(id)arg1 ;
-(id)initWithTIKeyboardLayout:(id)arg0 ;
-(id)keyboardOrientation;
-(id)toJsonDictionary;


@end


#endif