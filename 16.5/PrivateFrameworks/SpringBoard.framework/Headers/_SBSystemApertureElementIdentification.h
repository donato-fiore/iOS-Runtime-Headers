// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSYSTEMAPERTUREELEMENTIDENTIFICATION_H
#define _SBSYSTEMAPERTUREELEMENTIDENTIFICATION_H

@class NSString;
@protocol SAElementIdentifying;

#import <Foundation/Foundation.h>


@interface _SBSystemApertureElementIdentification : NSObject <SAElementIdentifying>



@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 elementIdentifier:(id)arg1 ;


@end


#endif