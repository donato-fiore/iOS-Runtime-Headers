// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWFILEDESCRIPTOR_H
#define WFWORKFLOWFILEDESCRIPTOR_H

@class WFFileRepresentation, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFWorkflowFileDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) WFFileRepresentation *file; // ivar: _file
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFile:(id)arg0 name:(id)arg1 ;
-(id)initWithFile:(id)arg0 name:(id)arg1 sourceAppIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif