// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAEXPORTABLEDOCUMENTTYPE_H
#define TSAEXPORTABLEDOCUMENTTYPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSAExportableDocumentType : NSObject

@property (readonly, nonatomic) NSString *exportProgressMessage; // ivar: _exportProgressMessage
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)exportableTypeWithType:(id)arg0 localizedName:(id)arg1 exportProgressMessage:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithType:(id)arg0 localizedName:(id)arg1 exportProgressMessage:(id)arg2 ;


@end


#endif