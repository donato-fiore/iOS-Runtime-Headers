// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIROLESENTITY_H
#define VUIROLESENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUIRolesEntity : NSObject

@property (retain, nonatomic) NSString *characterName; // ivar: _characterName
@property (retain, nonatomic) NSString *personName; // ivar: _personName
@property (retain, nonatomic) NSString *roleTitle; // ivar: _roleTitle
@property (retain, nonatomic) NSString *type; // ivar: _type


-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif