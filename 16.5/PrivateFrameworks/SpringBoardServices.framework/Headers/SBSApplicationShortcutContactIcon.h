// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSAPPLICATIONSHORTCUTCONTACTICON_H
#define SBSAPPLICATIONSHORTCUTCONTACTICON_H

@class NSString, NSData;


#import "SBSApplicationShortcutIcon.h"

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initForSubclass;
-(id)initWithContactIdentifier:(id)arg0 ;
-(id)initWithFirstName:(id)arg0 lastName:(id)arg1 ;
-(id)initWithFirstName:(id)arg0 lastName:(id)arg1 imageData:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif