/*
 * FNApplicationGlue.h
 *
 * /System/Library/CoreServices/Finder.app
 * osaglue 0.4.0
 *
 */

#import <Foundation/Foundation.h>


#import "Appscript/Appscript.h"
#import "FNConstantGlue.h"
#import "FNReferenceGlue.h"


@interface FNApplication : FNReference
- (id)initWithTargetType:(ASTargetType)targetType_ data:(id)targetData_;
+ (id)application;
+ (id)applicationWithName:(NSString *)name;
+ (id)applicationWithBundleID:(NSString *)bundleID ;
+ (id)applicationWithURL:(NSURL *)url;
+ (id)applicationWithPID:(pid_t)pid;
+ (id)applicationWithDescriptor:(NSAppleEventDescriptor *)desc;
- (id)init;
- (id)initWithName:(NSString *)name;
- (id)initWithBundleID:(NSString *)bundleID;
- (id)initWithURL:(NSURL *)url;
- (id)initWithPID:(pid_t)pid;
- (id)initWithDescriptor:(NSAppleEventDescriptor *)desc;
- (FNReference *)AS_referenceWithObject:(id)object;
@end

