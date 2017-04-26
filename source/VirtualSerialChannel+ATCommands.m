//
//  VirtualSerialChannel+ATCommands.m
//  DriveWire MacServer
//
//  Created by Boisy Pitre on 4/23/15.
//
//

#import "VirtualSerialChannel+ATCommands.h"

@implementation VirtualSerialChannel (ATCommands)

#pragma mark -
#pragma mark AT Command Handlers

- (void)handleATCommand:(NSArray *)commandArray;
{
    // objectAtIndex:0 is the 'at'.... command -- we're interested in the characaters that follow it
    NSString *restOfATCommand = [[commandArray objectAtIndex:0] substringFromIndex:2];
    
    if ([restOfATCommand isEqualToString:@"z"])
    {
    }
}

@end