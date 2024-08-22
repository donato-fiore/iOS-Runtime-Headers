// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFADDTOMEDIALIBRARYCONTEXTUALACTION_H
#define WFADDTOMEDIALIBRARYCONTEXTUALACTION_H



#import "WFContextualAction.h"
#import "WFContextualActionMediaItemDescriptor.h"

@interface WFAddToMediaLibraryContextualAction : WFContextualAction

@property (readonly, nonatomic) WFContextualActionMediaItemDescriptor *mediaItemDescriptor; // ivar: _mediaItemDescriptor


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaItemDescriptor:(id)arg0 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif