// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWCOLLECTION_H
#define WFWORKFLOWCOLLECTION_H

@class NSString;


#import "WFDatabaseObjectDescriptor.h"

@interface WFWorkflowCollection : WFDatabaseObjectDescriptor

@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic, getter=isFolder) BOOL folder; // ivar: _folder
@property (readonly, nonatomic) unsigned short glyphCharacter; // ivar: _glyphCharacter
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 isFolder:(BOOL)arg1 name:(id)arg2 glyphCharacter:(unsigned short)arg3 isDeleted:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif