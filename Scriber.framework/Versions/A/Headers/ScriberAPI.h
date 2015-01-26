//
//  ScriberAPI.h
//  Scriber
//
//  Created by Andrew Johnson on 12/6/14.
//  Copyright (c) 2014 Scriber. All rights reserved.
//

extern NSString * const SCRIBER_ID_KEYCHAIN_SERVICE_NAME;
extern NSString * const EMAIL_KEYCHAIN_SERVICE_NAME;
extern NSString * const SCRIBER_SDK_VERSION_NUMBER;

#ifndef Scriber_ScriberAPI_h
#define Scriber_ScriberAPI_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ScriberAPI : NSObject { }

// Set the API key you get when you sign up at Scriber.io. Call this method before you do anything else.
// Log in a user and start tracking. Call this method in applicationDidFinishLaunching.
+(void) loginUserForAPIKey:(NSString*)key;

// when a user buys a subscription or IAP, send the receipt to Scriber
+(void) recordPurchase:(NSDictionary*)purchaseInfo;

// optionally identify the user for metrics and contact
+(void) setEmail:(NSString*)email;
+(void) setUsername:(NSString*)username;
+(void) setUserID:(NSString*)userID;

// logout and don't send further analytics
+(void) logout;

// the scriber ID for the user, or null if none has been assigned
+ (NSString*) scriberID;

// record a custom event with just a label
+(void) recordEvent:(NSString*)label;

// wraps vendorID, only a private API?
+ (NSString*) appInstallID;

@end

#endif
