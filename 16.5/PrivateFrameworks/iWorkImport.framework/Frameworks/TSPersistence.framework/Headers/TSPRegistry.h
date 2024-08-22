// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPREGISTRY_H
#define TSPREGISTRY_H


#import <Foundation/Foundation.h>


@interface TSPRegistry : NSObject {
    unordered_map<unsigned int, const google::protobuf::Message *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, const google::protobuf::Message *>>> _messageTypeToPrototypeMap;
    unordered_map<const google::protobuf::Descriptor *, unsigned int, TSP::DescriptorHash, std::equal_to<const google::protobuf::Descriptor *>, std::allocator<std::pair<const google::protobuf::Descriptor *const, unsigned int>>> _descriptorToMessageTypeMap;
    unordered_map<unsigned int, const char *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, const char *>>> _messageTypeToClassnameMap;
    unordered_map<const char *, unsigned int, TSP::CStringHash, TSP::CStringEqualTo, std::allocator<std::pair<const char *const, unsigned int>>> _classnameToMessageTypeMap;
    unordered_map<unsigned int, __unsafe_unretained Class, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, __unsafe_unretained Class>>> _messageTypeToClassMap;
}




+(id)sharedRegistry;
+(void)setInitializationHandler:(id)arg0 ;
-(Class)unarchiveClassForMessageType:(unsigned int)arg0 ;
-(id)description;
-(id)init;
-(struct Message *)messagePrototypeForMessageType:(unsigned int)arg0 ;
-(unsigned int)messageTypeForDescriptor:(*void)arg0 ;
-(unsigned int)messageTypeForUnarchiveClassname:(char *)arg0 ;
-(void)dealloc;
-(void)registerPersistenceMessages;
-(void)resetForMessageType:(unsigned int)arg0 descriptor:(*void)arg1 ;
-(void)setDeprecatedMessageType:(unsigned int)arg0 ;
-(void)setMessageType:(unsigned int)arg0 forUnarchiveClassname:(char *)arg1 ;
-(void)setMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 descriptor:(*void)arg2 unarchiveClassname:(char *)arg3 ;
-(void)setOverrideMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 descriptor:(*void)arg2 ;
-(void)setOverrideMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 descriptor:(*void)arg2 unarchiveClassname:(char *)arg3 ;
-(void)setUpgradeMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 unarchiveClass:(Class)arg2 unarchiveClassname:(char *)arg3 ;
-(void)setUpgradeMessageType:(unsigned int)arg0 messagePrototype:(struct Message *)arg1 unarchiveClassname:(char *)arg2 ;


@end


#endif